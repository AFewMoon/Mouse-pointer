#include<stdio.h>
#include<windows.h>//ͷ�ļ�
int main() {
	while(1) {
		if(GetAsyncKeyState(VK_SPACE)) { //���¿ո񣬿�ʼִ��
			while(1) {
				mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);//��ǰλ�õ��һ�����
				Sleep(100);//ÿ0.1����һ��
				if(GetAsyncKeyState(VK_ESCAPE))return 0; //��esc�˳�
			}
		}
	}
	return 0;
}
