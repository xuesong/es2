// sword:__DIR__"obj/broken_sword.c" �Ʋ��潣һ��

#include <weapon.h>
#include <ansi.h>

inherit SWORD;
//inherit F_UNIQUE;

void create()
{
    set_name( HIW"���� �� �� ����" NOR,({"broken sword","sword"}));
	set_weight(4500);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
       	set("long", "���洦ȱ��һ�ǣ�ȱ�Ǵ����������׹���潣��\n");
		set("value", 4000);
		set("material", "�������");
        set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
        set("replica_ob", "/obj/weapon/longsword");
    }
	init_sword(65);
	setup();
}
