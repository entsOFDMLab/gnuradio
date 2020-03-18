/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/multiply_const_v.h>

template<typename T>
void bind_multiply_const_v_template(py::module& m, const char *classname)
{
    using multiply_const_v      = gr::blocks::multiply_const_v<T>;

    py::class_<multiply_const_v, gr::sync_block, gr::block, gr::basic_block, std::shared_ptr<multiply_const_v>>(m, classname)
        .def(py::init(&gr::blocks::multiply_const_v<T>::make))
        ;
} 

void bind_multiply_const_v(py::module& m)
{
    bind_multiply_const_v_template<std::int16_t>(m,"multiply_const_vss");
    bind_multiply_const_v_template<std::int32_t>(m,"multiply_const_vii");
    bind_multiply_const_v_template<float>(m,"multiply_const_vff");
    bind_multiply_const_v_template<gr_complex>(m,"multiply_const_vcc");

} 
