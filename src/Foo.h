#ifndef FOO_H
#define FOO_H

#include <emscripten/bind.h>

class Foo {
public:
    void SayHello();
};

EMSCRIPTEN_BINDINGS(Foo) {
  emscripten::class_<Foo>("Foo")
    .constructor()
    .function("SayHello", &Foo::SayHello)
    ;
}

#endif
