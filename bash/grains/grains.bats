#!/usr/bin/env bats
load bats-extra

# generated on 2026-08-14T05:27:24+00:00

@test "grains on square 1" {
    run bash grains.sh 1
    assert_success
    assert_output "1"
}

@test "grains on square 2" {
    run bash grains.sh 2
    assert_success
    assert_output "2"
}

@test "grains on square 3" {
    run bash grains.sh 3
    assert_success
    assert_output "4"
}

@test "grains on square 4" {
    run bash grains.sh 4
    assert_success
    assert_output "8"
}

@test "grains on square 16" {
    run bash grains.sh 16
    assert_success
    assert_output "32768"
}

@test "grains on square 32" {
    run bash grains.sh 32
    assert_success
    assert_output "2147483648"
}

@test "grains on square 64" {
    run bash grains.sh 64
    assert_success
    assert_output "9223372036854775808"
}

@test "square 0 is invalid" {
    run bash grains.sh 0
    assert_failure
    assert_output "Error: invalid input"
}

@test "negative square is invalid" {
    run bash grains.sh -1
    assert_failure
    assert_output "Error: invalid input"
}

@test "square greater than 64 is invalid" {
    run bash grains.sh 65
    assert_failure
    assert_output "Error: invalid input"
}

@test "returns the total number of grains on the board" {
    run bash grains.sh total
    assert_success
    assert_output "18446744073709551615"
}

