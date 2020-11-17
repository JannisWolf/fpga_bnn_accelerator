
SRCS=Example1.vhd  accelerator.vhd
TARGET=TASTE.bit

all:    ${TARGET}

${TARGET}:      ${SRCS}
	xst -intstyle ise -ifn TASTE.xst -ofn TASTE.syr || exit 1
	ngdbuild -intstyle ise -dd _ngo -aul -nt timestamp -uc ZestSC1.ucf -p xc3s1000-ft256-5 TASTE.ngc TASTE.ngd || exit 1
	map -intstyle ise -p xc3s1000-ft256-5 -cm area -ir off -pr b -c 100 -o TASTE_map.ncd TASTE.ngd TASTE.pcf || exit 1
	par -w -intstyle ise -ol high -t 1 TASTE_map.ncd TASTE.ncd TASTE.pcf || exit 1
	trce -intstyle ise -e 3 -s 5 -n 3 -xml TASTE.twx TASTE.ncd -o TASTE.twr TASTE.pcf -ucf ZestSC1.ucf || exit 1
	bitgen -intstyle ise -f TASTE.ut TASTE.ncd || exit 1
	@echo "========================================"
	@echo "      ${TARGET} built successfully.      "
	@echo "========================================"

clean:
	rm -f ${TARGET}
