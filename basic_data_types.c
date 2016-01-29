#include <stdio.h>

int main(void) {
	/* 
		c变量的赋值操作实际发生了隐式类型转换：int -> char，所以只有最后8位会起作用，即c的值最后是E.
		而Java则直接编译错误，说invalid char。
	*/
	char c = 'FATE';//同时编译器也会告警
	printf("%c\n", c);//E

	/* float类型数据，最多只有6位小数 */
	float f = 1.03;
	printf("%f, %f\n", f * 4, f * 5);//314.000000

	float a, b;
	b = 2.0E20 + 1.0;
	a = b - 2.0E20;
	printf("%f\n", a);//4008175468544.000000，因为float最多6位有效数字，据此，如果把2.0E20改为2.0E4，则能得到争取结果1.000000

	return 0;
}