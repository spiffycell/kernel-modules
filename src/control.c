#include <linux/syscalls.h>

MODULE_LICENSE("GPL");

// read_cr0() shows the value in control register 0
// write_cr0() writes a value to control register 0
static int __init cr_init(void) {
	printk(KERN_INFO "Hello!");
	printk(KERN_INFO "CR0: 0x%lX\n", read_cr0());
	// there is no read_cr1()
	printk(KERN_INFO "CR2: 0x%lX\n", read_cr2());
	// there is no read_cr3()
	// there is no read_cr4()
	return 0;
}

static void __exit cr_clean(void) {
	printk(KERN_INFO "Byez");
}

// sudo insmod <module>.ko
module_init(cr_init)

// sudo rmmod <module>.ko
module_exit(cr_clean)
