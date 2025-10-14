#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �Լ���: get_id()
// ���: 1001������ ���ʷ� ������ ��ȣ�� �����ϸ鼭 ��ȯ�ϴ� ���
// �Է�: ����
// ��ȯ��: 1001���� �����ؼ� 1�� �����ϴ� ������ ��
// ����: ����

static int inc_id(int n);

int get_id(void)
{
	static int last_id = 1000;

	last_id = inc_id(last_id);

	return last_id;
}

static int inc_id(int n)
{
	return n + 1;
}