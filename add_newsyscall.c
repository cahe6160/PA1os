#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int x, int y, int* z) {

	int sum;
	printk(KERN_ALERT "Value for x is %d\n", x);
	printk(KERN_ALERT "Value for y is %d\n", y);
	sum = x + y;
	printk(KERN_ALERT "Result of x + y is %d\n", sum);
	
	copy_to_user(z, &sum, sizeof(int));
	return 0;
}
