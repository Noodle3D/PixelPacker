/*
-------------------------------------------------------------------------
This file is part of PixelPacker, tools to pack textures into as small as space as possible.

PixelPacker version 1 of 6 March 2011
Copyright (C) 2011 Ethan Steinberg <ethan.steinberg@gmail.com>

This program is released under the terms of the license contained
in the file COPYING.
---------------------------------------------------------------------------
*/


#ifndef PIXEL_CLI_H_INCLUDED
#define PIXEL_CLI_H_INCLUDED

#include <boost/utility.hpp>

class t_pixelCli : boost::noncopyable
{
public:

   t_pixelCli();

   void run(int argc, char **argv);
};

#endif
