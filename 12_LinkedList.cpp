#include <iostream>
#include <string>

struct Mahasiswa {
    int NIM;
    std::string NAMA;
    int NILAI;
    Mahasiswa* next;
};

class LinkedList {
private:
    Mahasiswa* head;
    
public:
    LinkedList() : head(nullptr) {}  // Gunakan nullptr

    // a. Menambahkan data baru
    void insert(int NIM, std::string NAMA, int NILAI) {
        Mahasiswa* newNode = new Mahasiswa{NIM, NAMA, NILAI, nullptr};
        if (!head || head->NILAI > NILAI) {
            newNode->next = head;
            head = newNode;
        } else {
            Mahasiswa* current = head;
            while (current->next && current->next->NILAI <= NILAI) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    
    // b. Menampilkan data dengan NILAI 90
    void displayWithValue90() {
        Mahasiswa* current = head;
        while (current) {
            if (current->NILAI == 90) {
                std::cout << "NIM: " << current->NIM << ", NAMA: " << current->NAMA << ", NILAI: " << current->NILAI << std::endl;
            }
            current = current->next;
        }
    }
    
    // c. Menampilkan seluruh data
    void displayAll() {
        Mahasiswa* current = head;
        while (current) {
            std::cout << "NIM: " << current->NIM << ", NAMA: " << current->NAMA << ", NILAI: " << current->NILAI << std::endl;
            current = current->next;
        }
    }
    
    // d. Menghapus data dengan NIM tertentu
    void deleteByNIM(int NIM) {
        if (!head) return;
        
        if (head->NIM == NIM) {
            Mahasiswa* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        Mahasiswa* current = head;
        while (current->next && current->next->NIM != NIM) {
            current = current->next;
        }
        
        if (current->next) {
            Mahasiswa* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
    
    // e. Menghitung nilai rata-rata kelas
    double average() {
        if (!head) return 0.0;
        
        int totalNilai = 0;
        int count = 0;
        Mahasiswa* current = head;
        
        while (current) {
            totalNilai += current->NILAI;
            count++;
            current = current->next;
        }
        
        return static_cast<double>(totalNilai) / count;
    }
};

int main() {
    LinkedList list;
    
    list.insert(2007140011, "Ali", 85);
    list.insert(2007140012, "Budi", 90);
    list.insert(2007140013, "Cici", 75);
    
    std::cout << "Data Mahasiswa dengan NILAI 90:" << std::endl;
    list.displayWithValue90();
    
    std::cout << "\nSeluruh Data Mahasiswa:" << std::endl;
    list.displayAll();
    
    std::cout << "\nMenghapus data dengan NIM 2007140022:" << std::endl;
    list.deleteByNIM(2007140022);
    
    std::cout << "\nSeluruh Data Mahasiswa setelah penghapusan:" << std::endl;
    list.displayAll();
    
    std::cout << "\nRata-rata NILAI kelas: " << list.average() << std::endl;
    
    return 0;
}
