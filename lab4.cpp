
/*
��������:
���������� ���� Fazzynumber ��� ������ � ��������� �������, ��
��������������� ������� ����� (� � e1, �, � + e2). ��� ����� � = (� - �i, �, � + �r) � � = (� - bi, �, � + br)
���������� �������� ����������� �� ��������� ��������:
� ��������� � + � = (� + � - �i - br, � + �, � + � + ar + br);
� ����������� � - � = (� - � - �i - br, � - �, � - � + ai + br);
� �������� � * � = (A * B � B * ai � � * bi + ai * bi, � * �, A * B + B * ai + � * bi + ai * bi);
� �������� ����� � = (1 / (� + ar), 1/ �, 1 / (� � �i)), � > 0;
� ������ � / � = ((A - ai) / (� + bi), � / �, (� + �r) / (� - bi)), � > 0;
*/


#include"Fazzynumber.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Fazzynumber();
	Fazzynumber one(13, 4, 5);
	Fazzynumber two;
	Fazzynumber three;
	//one = one.Init(12, 2, 4);
	//two = two.Init(15, 3, 6);
	//one = one.Read();
	//two = two.Read();
	three = one;
	one.toString();
	two.toString();
	Fazzynumber c;
	c.result(c = one + two);
	c.Display();
	c.result(c = one - two);
	c.Display();
	c.result(c = one * two);
	c.Display();
	c.result(c = one ^ two);
	c.Display_error1(three);
	c.result(c = one / two);
	c.Display_error2(two);
	/*one.result(one.sum(two));
	one.Display();
	one = three;
	one.result(one.subtract(two));
	one.Display();
	one = three;
	one.result(one.multiplication(two));
	one.Display();
	one = three;
	one.result(one.inverse(one));
	one.Display_error1(three);
	one = three;
	one.result(one.division(two));
	one.Display_error2(two);*/
	system("pause");
	return 0;

}