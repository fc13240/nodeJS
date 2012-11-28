// helloworld.cc

#include <node.h>    //��������nodeͷ�ļ�

using namespace v8;  //ʹ��V8�ͣ�node�����ռ�
using namespace node;

/**
 * �����������Ҫ��չ��NodeJs��c�����ˣ�������ԭ��һ������
 * Handle<Value> function_name(const Arguments& args);
 * ����Ϳ���ʹ��C++д���ֵײ������
 */
Handle<Value> sayHelloWorld(const Arguments& args){
    HandleScope scope;
    printf("Hello World!\n"); //��ӡһ����Hello World!��
    return scope.Close(Undefined()); //����undefined
}

/**
 * ��ʼ������������Ҫ�����ķ����󶨵�js������
 * ���� export.XXX = function(){};
 */
void init(Handle<Object> target) {
    NODE_SET_METHOD(target, "say", sayHelloWorld);
}

//!!!!!�����module_name�����binding.gyp�ļ��ﶨ���target_name�������������Ķ������ļ���������һ��
NODE_MODULE(hw, init); //Node require��ʱ���ִ�еĺ���������ģ������