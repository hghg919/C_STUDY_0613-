#include <stdio.h>
#include <windows.h>

//������������������������������������������������������������������������������������������������������������
// ȭ���� �����ְ� Ŀ���� ��ġ�� 0,0 ���� �̵���Ű�� �Լ�
//������������������������������������������������������������������������������������������������������������
void Clear(void);

//������������������������������������������������������������������������������������������������������������
// console â�� title�� ������ �ִ� �Լ�
//������������������������������������������������������������������������������������������������������������
void SetTitle(char* _szConsoleName);

//������������������������������������������������������������������������������������������������������������
// ���� ���� ȭ��
//������������������������������������������������������������������������������������������������������������
void GameStart(void);

//������������������������������������������������������������������������������������������������������������
// console â�� ũ�⸦ ���ϴ� �Լ� ( ����Ʈ 80, 25 )
//������������������������������������������������������������������������������������������������������������
void SetConsoleSize(int _col, int _lines);