#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �Լ���: get_id()
// ���: 1001������ ���ʷ� ������ ��ȣ�� �����ϸ鼭 ��ȯ�ϴ� ���
// �Է�: ����
// ��ȯ��: 1001���� �����ؼ� 1�� �����ϴ� ������ ��
// ����: ����

static int last_id = 1000;

int get_id(void)
{
	return ++last_id;
}