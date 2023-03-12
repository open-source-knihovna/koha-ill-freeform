[% IF whole.error %]
<p>Neznámá chyba</p>
[% END %]

[% IF whole.stage == "confirm" %]
<h2>Potvrzení ručního MVS požadavku</h2>
<p>Dožádaná knihovna již MVS požadavek obdržela a přislíbila dokument poskytnout.</p>
<p>Můžete-li potvrdit, že se tak stalo, klikněte prosím na tlačítko 'Potvrdit požadavek'.</p>
<p>
  [% base_url = "/cgi-bin/koha/ill/ill-requests.pl" %]
  [% proceed_url = base_url _ "?method=confirm&stage=confirm" _
                   "&illrequest_id=" _ request.illrequest_id %]
  <a class="btn btn-sm btn-default" href="[% proceed_url %]">Potvrdit požadavek</a>
  <a class="btn btn-sm btn-default cancel" href="[% base_url %]">Zrušit</a>
</p>
[% ELSE %]
<p>Neznámý stav. Tato situace by neměla nastat.
[% END %]
