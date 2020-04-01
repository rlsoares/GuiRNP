#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack();
    ~Stack();
    void push(int _n);
    int pop();
    bool isEmpty();
	void show(); //n�o percebi a necessidade da fun��o show na implementa��o gui
	int getSize();
    int getNumber(int _pos);

private:
    int m_top;
    int *m_elems;
};

#endif