<li>
				<a href=
   {dede:field.typeid runphp='yes'"}
   global $dsql ;
   $reid = $dsql->GetOne("SELECT reid FROM dede_arctype where id=@me");
   $reid = $reid['reid'];
   $typename = $dsql->GetOne("SELECT typedir FROM dede_arctype where id=$reid");
   @me=str_replace('{cmspath}','',$typename['typedir']);
{/dede:field.typeid}
   >
{dede:field.typeid runphp='yes'"}
   global $dsql ;
   $reid = $dsql->GetOne("SELECT reid FROM dede_arctype where id=@me");
   $reid = $reid['reid'];
   $typename = $dsql->GetOne("SELECT typename FROM dede_arctype where id=$reid");
   @me=$typename['typename'];
{/dede:field.typeid}
</a>
				<div class="p_r">
					<a class="tit " href="/bk/al/13590.html" target="_blank" title="Ү³��ѧ¼ȡ�ݱ������Է���������">Ү³��ѧ¼ȡ�ݱ������Է���</a>
					<p>��Ȼѧ���ı�׼���ɼ�һ�㣬��������������У�ͨ����ľ����ʵ�ָ����ѧ�������ھ��������д�������飬����ȡ������Ľ��!</p>
				</div>
				<div class="clear"></div>
				<p class="p_b">
				��ǩ��
<a href= target="_blank">����</a><a href= target="_blank">������ѧEA����</a><a href= target="_blank">���</a>
				</p>
			</li>