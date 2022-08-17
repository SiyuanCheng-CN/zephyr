Title: Shared DSP Support

Description:

The Shared DSP Support test uses two tasks to:

  1) load and store dsp registers and check for corruption
  2) independently compute complex vector product and check for any errors

This tests the ability of tasks to safely share dsp hardware
resources, even when switching occurs preemptively (note that both sets of
tests run concurrently even though they report their progress at different
times).

The demonstration utilizes semaphores, round robin scheduling, DSP and XY
memory support.

--------------------------------------------------------------------------------

Sample Output:

Running TESTSUITE dsp_sharing
===================================================================
START - test_load_store
Load and store OK after 0 (high) + 95 (low) tests
Load and store OK after 100 (high) + 13585 (low) tests
Load and store OK after 200 (high) + 27074 (low) tests
Load and store OK after 300 (high) + 40563 (low) tests
Load and store OK after 400 (high) + 54052 (low) tests
Load and store OK after 500 (high) + 67541 (low) tests
 PASS - test_load_store in 10.18 seconds
===================================================================
START - test_complex_calculation
complex product calculation OK after 50 (high) + 64896 (low) tests (computed -160)
complex product calculation OK after 150 (high) + 192949 (low) tests (computed -160)
complex product calculation OK after 250 (high) + 320995 (low) tests (computed -160)
complex product calculation OK after 350 (high) + 449041 (low) tests (computed -160)
complex product calculation OK after 450 (high) + 577086 (low) tests (computed -160)
 PASS - test_complex_calculation in 10.15 seconds
===================================================================
TESTSUITE dsp_sharing succeeded
===================================================================
PROJECT EXECUTION SUCCESSFUL
