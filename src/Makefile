obj-m += hello_kernel.o 
obj-m += control_registers.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	$(RM) *.ko *.o *.order *.symvers *.mod *.mod.c *.mod.o
