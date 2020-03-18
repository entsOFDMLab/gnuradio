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

#include <gnuradio/dtv/dvbt_inner_coder.h>

void bind_dvbt_inner_coder(py::module& m)
{
    using dvbt_inner_coder    = gr::dtv::dvbt_inner_coder;


    py::class_<dvbt_inner_coder,gr::block, gr::basic_block,
        std::shared_ptr<dvbt_inner_coder>>(m, "dvbt_inner_coder")

        .def(py::init(&dvbt_inner_coder::make),
           py::arg("ninput"), 
           py::arg("noutput"), 
           py::arg("constellation"), 
           py::arg("hierarchy"), 
           py::arg("coderate") 
        )
        ;


} 