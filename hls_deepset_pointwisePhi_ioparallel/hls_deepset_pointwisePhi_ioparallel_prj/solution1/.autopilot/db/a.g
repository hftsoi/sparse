#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/coder/sparse/hls_deepset_pointwisePhi_ioparallel/hls_deepset_pointwisePhi_ioparallel_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}