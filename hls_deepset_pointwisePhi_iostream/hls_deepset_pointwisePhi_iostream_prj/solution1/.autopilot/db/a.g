#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/coder/sparse/hls_deepset_pointwisePhi_iostream/hls_deepset_pointwisePhi_iostream_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
