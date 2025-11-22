#!/usr/bin/bash
#https://github.com/cbassa/sattools/blob/f30219c47c49cb091a24da3a2e4112eeb6fe091d/scripts/install_dependencies.sh

SRCDIR="$HOME/software"

cd ${SRCDIR}
wget -c ftp://ftp.astro.caltech.edu/pub/pgplot/pgplot5.2.tar.gz

gunzip -c pgplot5.2.tar.gz | tar xvf -

mkdir -p ${SRCDIR}/pgplot-5.2.2
cd ${SRCDIR}/pgplot-5.2.2
sed -e "s/! PNDRIV/  PNDRIV/g" -e "s/! PSDRIV/  PSDRIV/g" -e "s/! XWDRIV/  XWDRIV/g" ${SRCDIR}/pgplot/drivers.list >${SRCDIR}/pgplot-5.2.2/drivers.list


${SRCDIR}/pgplot/makemake ${SRCDIR}/pgplot linux g77_gcc

sed -i -e "s/FCOMPL=g77/FCOMPL=gfortran/g" ${SRCDIR}/pgplot-5.2.2/makefile
sed -i -e "s/FFLAGC=-u -Wall -fPIC -O/FFLAGC=-ffixed-form -ffixed-line-length-none -u -Wall -fPIC -O/g" ${SRCDIR}/pgplot-5.2.2/makefile
sed -i -e "s|pndriv.o : ./png.h ./pngconf.h ./zlib.h ./zconf.h|pndriv.o : |g" ${SRCDIR}/pgplot-5.2.2/makefile

make

make cpg

sudo rm -rf /usr/local/lib/libpgplot.a /usr/local/lib/libcpgplot.a /usr/local/lib/libpgplot.so /usr/local/include/cpgplot.h
sudo ln -s ${SRCDIR}/pgplot-5.2.2/libpgplot.a /usr/local/lib/
sudo ln -s ${SRCDIR}/pgplot-5.2.2/libpgplot.so /usr/local/lib/
sudo ln -s ${SRCDIR}/pgplot-5.2.2/libcpgplot.a /usr/local/lib/
sudo ln -s ${SRCDIR}/pgplot-5.2.2/cpgplot.h /usr/local/include/
