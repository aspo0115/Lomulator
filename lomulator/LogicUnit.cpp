#include "stdafx.h"
#include "LogicUnit.h"
#include <afxtempl.h>

LogicUnit::LogicUnit()
{
}

LogicUnit::LogicUnit(CPoint init_pt)
{
	this->pt = init_pt;
}

LogicUnit::~LogicUnit()
{
}


//��ǥ ó��
void LogicUnit::setPoint(CPoint setPt) {
	this->pt = setPt;
}
CPoint LogicUnit::getPoint() {

	return pt;
}

//Input�� ó��
void LogicUnit::initInput(int size) {

	this->input = new bool[size];
}
void LogicUnit::setInput(int index, bool state) {

	this->input[index] = state;
}
bool LogicUnit::getInput(int index) {

	return this->input[index];
}

//Output�� ó��
void LogicUnit::initOutput(int size) {

	this->output = new bool[size];
}
void LogicUnit::setOutput(int index, bool state) {

	this->output[index] = state;
}
bool LogicUnit::getOutput(int index) {

	return this->output[index];
}

//Input ��ü�� ����
void LogicUnit::setInputList(LogicUnit *unit) {

	this->inputList.Add(unit);
}
LogicUnit* LogicUnit::getInputList(int index) {

	return (LogicUnit*)this->inputList[index];
}

//Output ��ü�� ����
void LogicUnit::setOutputList(LogicUnit *unit) {


	this->outputList.Add(unit);
}
LogicUnit* LogicUnit::getOutputList(int index) {

	return (LogicUnit*)this->outputList[index];
}

void LogicUnit::setMaxInput(int size) {
	this->MaxInput = size;
}
int LogicUnit::getMaxInput() {

	return this->MaxInput;
}
void LogicUnit::setCurrentInput(int size) {
	this->currentInput = size;
}
int LogicUnit::getCurrentInput() {

	return this->currentInput;
}
void LogicUnit::setMaxOutput(int size) {

	this->Maxoutput = size;
}
int LogicUnit::getMaxOutput() {

	return this->Maxoutput;
}
void LogicUnit::setCurrentOutput(int size) {

	this->currentoutput = size;
}
int LogicUnit::getCurrentOutput() {

	return this->currentoutput;
}


//���� ����
void LogicUnit::setDirction(Direction dir) {

	this->direction = dir;
}
Direction LogicUnit::getDirction() {

	return this->direction;
}
