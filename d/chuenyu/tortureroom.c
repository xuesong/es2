inherit ROOM;

void create()
{
        set("short", "�̷�");
        set("long", @LONG
�����̷��ѱ�Ǭ�µ�Ѫ��Ȼ�ɰ���ɫ��ɢ�����˱ǵ��ȳ���ǽ�Ϲ�����
��ʽ�������Ͼߡ��̷��ĵ���ɢ�����������������������á�ż��֮�䣬
�㻹������������֨֨���ļ������
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"tunnel6",
        "east" : __DIR__"tunnel4",
        ]));
        set("objects", ([
         __DIR__"npc/highrat": 2, 
         __DIR__"npc/guard2" : 2
         ]) );
         
         setup();
}
                 