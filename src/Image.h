
//
// Image.h
//
// Copyright (c) 2010 LearnBoost <tj@learnboost.com>
//

#ifndef __NODE_IMAGE_H__
#define __NODE_IMAGE_H__

#include "canvas.h"

using namespace v8;

class Image: public node::ObjectWrap {
  public:
    static void Initialize(Handle<Object> target);
    static Handle<Value> New(const Arguments &args);
    static Handle<Value> GetSrc(Local<String> prop, const AccessorInfo &info);
    static void SetSrc(Local<String> prop, Local<Value> val, const AccessorInfo &info);
    inline cairo_surface_t *surface(){ return _surface; } 
    inline char *filename(){ return _filename; }
    Image();
  
  private:
    char *_filename;
    cairo_surface_t *_surface;
    ~Image();
};

#endif