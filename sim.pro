TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    lib_json/json_reader.cpp \
    lib_json/json_value.cpp \
    lib_json/json_valueiterator.inl \
    lib_json/json_writer.cpp \
    Units.cpp \
    SimFileReader.cpp \
    StructuralInformationModel.cpp \
    GeneralInformation.cpp \
    StructuralInformation.cpp \
    Layout.cpp \
    Property.cpp \
    Geometry.cpp \
    Floor.cpp \
    Cline.cpp \
    LinearComponent.cpp \
    Column.cpp \
    Beam.cpp \
    Segment.cpp \
    Section.cpp \
    FrameSection.cpp \
    Rebar.cpp \
    Material.cpp \
    SlabSection.cpp \
    Slab.cpp

HEADERS += \
    json/allocator.h \
    json/assertions.h \
    json/autolink.h \
    json/config.h \
    json/features.h \
    json/forwards.h \
    json/json.h \
    json/reader.h \
    json/value.h \
    json/version.h \
    json/writer.h \
    lib_json/json_tool.h \
    Units.h \
    SimFileReader.h \
    StructuralInformationModel.h \
    GeneralInformation.h \
    StructuralInformation.h \
    Layout.h \
    Property.h \
    Geometry.h \
    Floor.h \
    Cline.h \
    LinearComponent.h \
    Column.h \
    Beam.h \
    Segment.h \
    Section.h \
    FrameSection.h \
    Rebar.h \
    Material.h \
    SlabSection.h \
    Slab.h
