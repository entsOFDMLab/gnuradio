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

#include <gnuradio/filter/pfb_synthesizer_ccf.h>

void bind_pfb_synthesizer_ccf(py::module& m)
{
    using pfb_synthesizer_ccf    = gr::filter::pfb_synthesizer_ccf;


    py::class_<pfb_synthesizer_ccf,gr::sync_interpolator,
        std::shared_ptr<pfb_synthesizer_ccf>>(m, "pfb_synthesizer_ccf")

        .def(py::init(&pfb_synthesizer_ccf::make),
           py::arg("numchans"), 
           py::arg("taps"), 
           py::arg("twox") = false 
        )
        

        .def("set_taps",&pfb_synthesizer_ccf::set_taps,
            py::arg("taps") 
        )
        .def("print_taps",&pfb_synthesizer_ccf::print_taps)
        .def("taps",&pfb_synthesizer_ccf::taps)
        .def("set_channel_map",&pfb_synthesizer_ccf::set_channel_map,
            py::arg("map") 
        )
        .def("channel_map",&pfb_synthesizer_ccf::channel_map)
        .def("to_basic_block",[](std::shared_ptr<pfb_synthesizer_ccf> p){
            return p->to_basic_block();
        })
        ;


} 