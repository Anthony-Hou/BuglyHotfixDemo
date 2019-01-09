//
// Created by Anthony on 2018/12/28.
//

#include "MyObject.h"


MyObject::MyObject()
{

}


MyObject::~MyObject()
{

}


void MyObject::TestCrash()
{
    char* p = nullptr;
    *p = 'c';
}