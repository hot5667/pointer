#pragma once

template<typename T>
struct TListNode
{
private:
	T Data;
};

//class 와 sturct 의 차이 
//sturct 의 경우 기본 제한자 경우 Public 이지만 class 는 Private 로 제한자가 되어 있다.



template<typename T>
class Clist
{
private:
	TListNode<T>* m_pHead;







};
