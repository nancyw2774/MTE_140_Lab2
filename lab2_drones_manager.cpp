#include "lab2_drones_manager.h"

// TODO: Implement all of the listed functions below

DronesManager::DronesManager() {
}

DronesManager::~DronesManager() {
	delete []first->prev;
	first->prev = NULL;
	delete []first->next;
	first->next = NULL;
	delete first;
	first = NULL;
	delete last;
	last = NULL;
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
	DroneRecord* temp = first;
	while (temp->next != NULL) {
		cout << temp->droneID << "  " << temp->range
			<< "  " << temp->yearBought << "  " << temp->droneType
			<< "  " << temp->manufacturer << "  " << temp->description
			<< "  " << temp->batteryType << endl;
		temp = temp->next;
	}
}

bool DronesManager::insert(DroneRecord value, unsigned int index) {
	return false;
}

bool DronesManager::insert_front(DroneRecord value) {
	return false;
}

bool DronesManager::insert_back(DroneRecord value) {
	DroneRecord* val = new DroneRecord(value);
	if (last == NULL)
		first = val;
	else {
		val->prev = last;
		last->next = val;
	}
	val->next = NULL;
	last = val;
	size++;
	return true;
}

bool DronesManager::remove(unsigned int index) {
	return false;
}

bool DronesManager::remove_front() {
	return false;
}

bool DronesManager::remove_back() {
	if (last == NULL)
		return false;
	DroneRecord* temp = last;
	last = last->prev;
	last->next = NULL;
	delete temp;
	temp = NULL;
	return true;
}

bool DronesManager::replace(unsigned int index, DroneRecord value) {
	return false;
}

bool DronesManager::reverse_list() {
	return false;
}

