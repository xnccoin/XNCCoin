#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/XNC.ico

convert ../../src/qt/res/icons/XNC-16.png ../../src/qt/res/icons/XNC-32.png ../../src/qt/res/icons/XNC-48.png ${ICON_DST}
