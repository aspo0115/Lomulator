#pragma once

enum Direction { NORTH, SOUTH, EAST, WEST };


class LogicUnit
{

	//���������
private:
	CPoint pt;				//��ǥ
	bool *input;			//�Է¹��� ��ȣ��
	bool *output;			//����� ��ȣ��
	CPtrArray inputList;	//�Է¹��� ��ü���� �迭
	CPtrArray outputList;	//������� ��ü���� �迭
	int MaxInput;			//�Է¹��� ��ȣ���� �ִ밹��
	int currentInput;		//�Է¹��� ��ȣ���� ���簹��
	int Maxoutput;			//������� ��ȣ���� �ִ밹��
	int currentoutput;		//�Է¹��� ��ȣ���� ���簹��
							//Label *label;			//��
	Direction direction = EAST;	//����

public:
	//��ǥ ó��
	void setPoint(CPoint setPt);
	CPoint getPoint();

	//Input�� ó��
	void initInput(int size);
	void setInput(int index, bool state);
	bool getInput(int index);

	//Output�� ó��
	void initOutput(int size);
	void setOutput(int index, bool state);
	bool getOutput(int index);

	//Input ��ü�� ����
	void setInputList(LogicUnit *unit);
	LogicUnit* getInputList(int index);

	//Output ��ü�� ����
	void setOutputList(LogicUnit *unit);
	LogicUnit* getOutputList(int index);

	//��ȣ���� ����
	void setMaxInput(int size);
	int getMaxInput();
	void setCurrentInput(int size);
	int getCurrentInput();
	void setMaxOutput(int size);
	int getMaxOutput();
	void setCurrentOutput(int size);
	int getCurrentOutput();

	//���� ����
	void setDirction(Direction dir);
	Direction getDirction();


public:
	LogicUnit();
	LogicUnit(CPoint init_Pt);
	~LogicUnit();
};

