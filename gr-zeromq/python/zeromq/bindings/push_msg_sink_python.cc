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

#include <gnuradio/zeromq/push_msg_sink.h>

void bind_push_msg_sink(py::module& m)
{
    using push_msg_sink    = gr::zeromq::push_msg_sink;


    py::class_<push_msg_sink,gr::block,
        std::shared_ptr<push_msg_sink>>(m, "push_msg_sink")

        .def(py::init(&push_msg_sink::make),
           py::arg("address"), 
           py::arg("timeout") = 100 
        )
        

        .def("last_endpoint",&push_msg_sink::last_endpoint)
        .def("to_basic_block",[](std::shared_ptr<push_msg_sink> p){
            return p->to_basic_block();
        })
        ;


} 