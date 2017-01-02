#include <stdio.h>

#include <kernel/tty.h>
#include "../arch/i386/gdt.h"
//#include "../arch/i386/inlas.h"
#include "../../kernel/arch/i386/gdt.h"
#include "../../kernel/arch/i386/idt.h"
#include "../../kernel/arch/i386/irq.h"
#include "../../kernel/arch/i386/isr.h"

/*this prints the cursor to row 1 column 0;
outb(0x3D4, 14);
outb(0x3D5, 0x00);
outb(0x3D4, 15);
outb(0x3D5, 0x50);
*/

void kernel_main(void) {
	__state__ = TS_STARTUP;
	terminal_initialize();
	terminal_writeLine("Initializing Xenia.");
	terminal_writeLine("Installing Global Descriptor Table");
	gdt_install();
	terminal_writeLine("GDT Installed. Installing Interrupt Descriptor Table");
	idt_install();
	terminal_writeLine("IDT Installed. Installing Interupt Request Line");
	isrs_install();
	irq_install();

	while(1);

}
