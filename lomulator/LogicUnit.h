#pragma once

enum Direction { NORTH, SOUTH, EAST, WEST };


class LogicUnit
{

	//멤버변수들
private:
	CPoint pt;				//좌표
	bool *input;			//입력받은 신호값
	bool *output;			//출력할 신호값
	CPtrArray inputList;	//입력받은 객체들의 배열
	CPtrArray outputList;	//출력해줄 객체들의 배열
	int MaxInput;			//입력받은 신호들의 최대갯수
	int currentInput;		//입력받은 신호들의 현재갯수
	int Maxoutput;			//출력해줄 신호들의 최대갯수
	int currentoutput;		//입력받은 신호들의 현재갯수
							//Label *label;			//라벨
	Direction direction = EAST;	//방향

public:
	//좌표 처리
	void setPoint(CPoint setPt);
	CPoint getPoint();

	//Input값 처리
	void initInput(int size);
	void setInput(int index, bool state);
	bool getInput(int index);

	//Output값 처리
	void initOutput(int size);
	void setOutput(int index, bool state);
	bool getOutput(int index);

	//Input 개체들 연결
	void setInputList(LogicUnit *unit);
	LogicUnit* getInputList(int index);

	//Output 개체들 연결
	void setOutputList(LogicUnit *unit);
	LogicUnit* getOutputList(int index);

	//신호갯수 설정
	void setMaxInput(int size);
	int getMaxInput();
	void setCurrentInput(int size);
	int getCurrentInput();
	void setMaxOutput(int size);
	int getMaxOutput();
	void setCurrentOutput(int size);
	int getCurrentOutput();

	//방향 설정
	void setDirction(Direction dir);
	Direction getDirction();


public:
	LogicUnit();
	LogicUnit(CPoint init_Pt);
	~LogicUnit();
};

