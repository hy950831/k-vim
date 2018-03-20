Vim�UnDo� ���䩣�Z�H[gUr�K9G0�h�J\�e	��   :                                  Z���    _�                     6       ����                                                                                                                                                                                                                                                                                                                                                             Z���     �   5   7   :       */ 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Z���    �                /* Bar staff functions */ �                 *  5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             Z���     �               :   /*   I * **********************************************************************    *   F * Define function prototypes, types, and constants needed by both the   ? * driver (bar_driver.c) and the code you need to write (bar.c)    *   ; * YOU SHOULD NOT RELY ON ANY CHANGES YOU MAKE TO THIS FILE    *   7 * We will use our own version of this file for testing    */       #include "barglass.h"   #include "bar.h"            extern int run_bar(int, char**);       /*   7 * FUNCTION PROTOTYPES FOR THE FUNCTIONS YOU MUST WRITE    *   % * YOU CANNOT MODIFY THESE PROTOTYPES    *    */       /* Customer functions */   +extern void order_drink(struct barorder *);           /* Bar staff functions */   *extern struct barorder * take_order(void);   *extern void fill_order(struct barorder *);   +extern void serve_order(struct barorder *);           '/* Bar opening and closing functions */   extern void bar_open(void);   extern void bar_close(void);           /*   E * Function prototype for the supplied routine that mixes the various     * bottle contents into a glass.    *   ( * YOU MUST USE THIS FUNCTION FOR MIXING    *    */   #extern void mix(struct barorder *);           /*   D * THESE PARAMETERS CAN BE CHANGED BY US, so you should test various   ? * combinations. NOTE: We will only ever set these to something    * greater than zero.    */       B#define NCUSTOMERS 10 /* The number of customers drinking today */   B#define NBARTENDERS 3 /* The number of bartenders working today */    5��