#include "vulkanwindow.h"

#include <QGuiApplication>
#include <QVulkanInstance>

int main(int argc, char *argv[])
{
	QGuiApplication a(argc, argv);
	QVulkanInstance inst;

	if(!inst.create()) {
		return 1;
	}
	VulkanWindow w;
	w.setVulkanInstance(&inst);
	w.show();
	return a.exec();
}
