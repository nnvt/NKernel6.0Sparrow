cmd_drivers/usb/gadget/built-in.o :=  /usr/local/share/arm-eabi-4.7/bin/arm-eabi-ld -EL    -r -o drivers/usb/gadget/built-in.o drivers/usb/gadget/udc-core.o drivers/usb/gadget/libcomposite.o drivers/usb/gadget/ci13xxx_msm.o drivers/usb/gadget/usb_f_acm.o drivers/usb/gadget/u_serial.o drivers/usb/gadget/usb_f_serial.o drivers/usb/gadget/g_android.o 