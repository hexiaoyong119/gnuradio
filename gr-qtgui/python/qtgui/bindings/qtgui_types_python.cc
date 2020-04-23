/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/qtgui/qtgui_types.h>
// pydoc.h is automatically generated in the build directory
#include <qtgui_types_pydoc.h>

void bind_qtgui_types(py::module& m)
{


    py::enum_<::gr::qtgui::data_type_t>(m, "data_type_t")
        .value("INT", ::gr::qtgui::INT)                 // 0
        .value("FLOAT", ::gr::qtgui::FLOAT)             // 1
        .value("DOUBLE", ::gr::qtgui::DOUBLE)           // 2
        .value("COMPLEX", ::gr::qtgui::COMPLEX)         // 3
        .value("STRING", ::gr::qtgui::STRING)           // 4
        .value("INT_VEC", ::gr::qtgui::INT_VEC)         // 5
        .value("FLOAT_VEC", ::gr::qtgui::FLOAT_VEC)     // 6
        .value("DOUBLE_VEC", ::gr::qtgui::DOUBLE_VEC)   // 7
        .value("COMPLEX_VEC", ::gr::qtgui::COMPLEX_VEC) // 8
        .export_values();
    py::enum_<::gr::qtgui::graph_t>(m, "graph_t")
        .value("NUM_GRAPH_NONE", ::gr::qtgui::NUM_GRAPH_NONE)   // 0
        .value("NUM_GRAPH_HORIZ", ::gr::qtgui::NUM_GRAPH_HORIZ) // 1
        .value("NUM_GRAPH_VERT", ::gr::qtgui::NUM_GRAPH_VERT)   // 2
        .export_values();
}
