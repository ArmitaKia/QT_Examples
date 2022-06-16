#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QFile file{"test.txt"};

    if(file.open(QIODevice::ReadWrite)) {
        file.write("Hello!");
        file.flush();
        file.write("       How are you?");
        file.flush();
        file.seek(6);
        file.write("Armita");
        file.copy("test_copy.txt");
        file.remove();
    }

    return 0;
}
