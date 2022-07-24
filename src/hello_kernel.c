#include <linux/syscalls.h>

MODULE_LICENSE("GPL");

static int __init hello(void) {
	// printk() prints to /var/log/kern.log
	printk(KERN_INFO "Hello, Kernel!");
	return 0;
}

static void __exit goodbye(void) {
	// printk() prints to /var/log/kern.log
	printk(KERN_INFO "Goodbye, Kernel!");
}

// sudo insmod <module>.ko
module_init(hello)

// sudo rmmod <module>.ko
module_exit(goodbye)
