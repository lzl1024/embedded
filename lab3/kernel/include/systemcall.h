/*
 * stack.h: Defines the stack location in U-BOOT Environment
 *
 * Authors: ZHUOLIN LIU 1 <zhuolinl>
 *          QIAN MAO 2 <qianm>
 *          DANLEI ZHOU 3 <danleiz> 
 * Date:    14:45 & 10/11/2013
 */

#ifndef SYSTERMCALL_H
#define SYSTERMCALL_H

void exit(int status);
void swi_handler();
void irq_handler();
ssize_t exec(int argc, char *argv[]);

#endif /* SYSTERMCALL_H */
