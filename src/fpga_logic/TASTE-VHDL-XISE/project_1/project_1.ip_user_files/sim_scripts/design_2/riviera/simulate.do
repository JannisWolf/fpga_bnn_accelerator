onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+design_2 -L xil_defaultlib -L secureip -O5 xil_defaultlib.design_2

do {wave.do}

view wave
view structure

do {design_2.udo}

run -all

endsim

quit -force
