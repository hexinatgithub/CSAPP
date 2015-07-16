/*
CSAPP 3.67

A:e1.p		0
  e1.x		4
  e2.y		0
  e2.next	4
B:8
*/

 void proc(union ele *up){
 	/*
 	对应的指令的含义
	1	up	  					%edx
	2	up->next				%ecx
	3	up->next->p 			%eax
	4	*(up->next->p)			%eax
	5	*(up->next->p)-up->y	%eax
	6	up->x = R[%eax]			
 	*/
 	up -> x = *(up->next->p) - up->y;
 }