/*
 * CTA7.cpp
 *
 *  Created on: Oct 27, 2024
 *      Author: bowen
 */

#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

std::atomic<bool> ready(false);
std::atomic<int> count(0);

void countUp() {
    for (int i = 1; i <= 20; ++i) {
        count = i;
        std::cout << "Count Up: " << count.load() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    }
    ready = true; // Indicate counting up is done
}

void countDown() {
    while (!ready.load()) {
        std::this_thread::yield(); // Wait for countUp to finish
    }
    for (int i = 20; i >= 0; --i) {
        std::cout << "Count Down: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    }
}

int main() {
    std::thread thread1(countUp);
    std::thread thread2(countDown);

    thread1.join();
    thread2.join();

    return 0;
}

