#include "lab2_drones_manager.h"

// TODO: Implement all of the listed functions below

DronesManager::DronesManager() {
}

DronesManager::~DronesManager() {
}

bool operator==(const DronesManager::DroneRecord& lhs, const DronesManager::DroneRecord& rhs) {
	return false;
}

unsigned int DronesManager::get_size() const {
	return 0;
}

bool DronesManager::empty() const {
	return false;
}

DronesManager::DroneRecord DronesManager::select(unsigned int index) const {
	return DroneRecord();
}

unsigned int DronesManager::search(DroneRecord value) const {
	return 0;
}

void DronesManager::print() const {
}

bool DronesManager::insert(DroneRecord value, unsigned int index) {
	return false;
}

bool DronesManager::insert_front(DroneRecord value) {
	return false;
}

bool DronesManager::insert_back(DroneRecord value) {
	return false;
}

bool DronesManager::remove(unsigned int index) {
	return false;
}

bool DronesManager::remove_front() {
	return false;
}

bool DronesManager::remove_back() {
	return false;
}

bool DronesManager::replace(unsigned int index, DroneRecord value) {
	return false;
}

bool DronesManager::reverse_list() {
	return false;
}

