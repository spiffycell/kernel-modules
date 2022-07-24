obj-m += hello_kernel.o 
obj-m += control.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
