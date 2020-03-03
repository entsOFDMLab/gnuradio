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

#include <gnuradio/digital/packet_headerparser_b.h>

void bind_packet_headerparser_b(py::module& m)
{
    using packet_headerparser_b    = gr::digital::packet_headerparser_b;


    py::class_<packet_headerparser_b,gr::sync_block,
        std::shared_ptr<packet_headerparser_b>>(m, "packet_headerparser_b")

        .def(py::init((std::shared_ptr<packet_headerparser_b>(*)(const gr::digital::packet_header_default::sptr&))&packet_headerparser_b::make),
           py::arg("header_formatter") 
        )
        .def(py::init((std::shared_ptr<packet_headerparser_b>(*)(long, const std::string&))&packet_headerparser_b::make),
           py::arg("header_len"),
           py::arg("len_tag_key") 
        )

        .def("to_basic_block",[](std::shared_ptr<packet_headerparser_b> p){
            return p->to_basic_block();
        })
        ;


} 