#include <linux/syscalls.h>

MODULE_LICENSE("GPL");

// read_cr0() shows the value in control register 0
// write_cr0() writes a value to control register 0
static int __init hello(void) {
	printk(KERN_INFO "Hello, Kernel!");
	return 0;
}

static void __exit goodbye(void) {
	printk(KERN_INFO "Goodbye, Kernel!");
}

// sudo insmod <module>.ko
module_init(hello)

// sudo rmmod <module>.ko
module_exit(goodbye)
