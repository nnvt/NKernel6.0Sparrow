cmd_crypto/ansi_cprng.ko := /usr/local/share/arm-eabi-4.7/bin/arm-eabi-ld -EL -r  -T /home/noahvt/Documents/NKernel6.0/scripts/module-common.lds --build-id  -o crypto/ansi_cprng.ko crypto/ansi_cprng.o crypto/ansi_cprng.mod.o