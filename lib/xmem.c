/* The MIT License
 * 
 * Copyright (c) 2017 John Schember <john@nachtimwald.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE
 */

#include <stdlib.h>

#include "xmem.h"

/* - - - - */

void *xcalloc(size_t count, size_t size)
{
    void *p;

    if (count == 0 || size == 0)
        abort();

    p = calloc(count, size);
    if (p == NULL)
        abort();
    return p;
}

void *xmalloc(size_t size)
{
    void *p;

    if (size == 0)
        abort();

    p = malloc(size);
    if (p == NULL)
        abort();
    return p;
}

void xfree(void *ptr)
{
    if (ptr == NULL)
        return;
    free(ptr);
}

void *xrealloc(void *ptr, size_t size)
{
    void *p;

    if (ptr == NULL || size == 0)
        abort();

    p = realloc(ptr, size);
    if (p == NULL)
        abort();
    return p;
}