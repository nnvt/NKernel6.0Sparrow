cmd_drivers/pinctrl/built-in.o :=  /usr/local/share/arm-eabi-4.7/bin/arm-eabi-ld -EL    -r -o drivers/pinctrl/built-in.o drivers/pinctrl/core.o drivers/pinctrl/pinmux.o drivers/pinctrl/pinconf.o drivers/pinctrl/devicetree.o drivers/pinctrl/pinconf-generic.o drivers/pinctrl/pinctrl-msm.o drivers/pinctrl/pinctrl-msm-tlmm.o 